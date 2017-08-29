//  main.swift
//  ED_RRiveraG1_A04
//
//  Created by Roberto Rivera on 8/24/17.
//  Copyright © 2017 Riverto. All rights reserved.
//

import Foundation

print("Hello, World!")

class FetchClass {
    var vector: [Int] = []
    func fetch(n: Int)->Int{ //clase que sera sobreescrita
        preconditionFailure("This method must be overridden")
    }
    func setV(v: [Int]){
        self.vector = v
    }
    func randomV(n:Int)->[Int]{
        var v:[Int] = [Int]()//se crea un arreglo de tamaño dinamico
        for _ in 0...(n-1) { //se llena agregan valores n numero de veces
            //v.append(Int(rand() % 200)) //en caso de que esta linea no funcione comentarla y descomentar la siguiente
            v.append(Int(arc4random_uniform(20)))
        }
        return v
    }
    func getV()->[Int]{
        return self.vector
    }
    func showV(){ //muestra el vector con estilo de vector [0,1,2,3]
        let count:Int = self.vector.count-1
        var string = "["
        for(index) in 0...count{
            string+=String(self.vector[index])
            string+=","
        }
        string = String(string.characters.dropLast()) + "]"
        print(string)
    }
    func showF(n: Int){
        if(n==(-1)){print("El numero no se encuentra en el vector")} //si no encontramos el numero
        else
        {print("El numero se encuentra en la posición \(n)")} //si lo encontramos lo mostramos
    }
}

protocol Sorting{ //El protocolo es lo mas parecido que encontre a una interface
    func selection()
    func insertion()
    func swap(i: Int, j: Int)
    func burbuja()
    func quickSort(inicio: Int, final: Int)
    func mergeSort(array: [Int])->[Int]
    func merge(izquierda: inout [Int], derecha: inout [Int])->[Int]
}

class binario: FetchClass, Sorting{
    func merge(izquierda: inout [Int], derecha: inout [Int])->[Int] {
        var result:[Int] = [Int]()
        while((!izquierda.isEmpty)&&(!derecha.isEmpty)){
            if(izquierda.first! <= derecha.first!){
                result.append(izquierda.first!)
                izquierda.removeFirst()
            } else {
                result.append(derecha.first!)
                derecha.removeFirst()
            }
        }
        while(!izquierda.isEmpty){
            result.append(izquierda.first!)
            izquierda.removeFirst()
        }
        while(!derecha.isEmpty){
            result.append(derecha.first!)
            derecha.removeFirst()
        }
        return result
    }

    func mergeSort(array: [Int])->[Int] {
        if(array.count <= 1){
            return array
        }
        var izquierda:[Int]=[Int]()
        var derecha:[Int]=[Int]()
        for index in stride(from: 0, to: (array.count-1), by: 1){
            if(index<(array.count/2)){
                izquierda.append(array[index])
            } else {
                derecha.append(array[index])
            }
        }
        izquierda=mergeSort(array: izquierda)
        derecha=mergeSort(array: derecha)
        
        return merge(izquierda: &izquierda, derecha: &derecha)
    }

    func insertion() {
        var temp:Int
        var j:Int
        for index in stride(from: 0, to: vector.count-1, by: 1){
            temp = vector[index]
            j = index-1
            while((j>=0)&&(vector[j]>temp)){
                vector[j+1] = vector[j]
                j-=1
            }
            vector[j+1] = temp
        }
    }

    func burbuja() {
        for _ in stride(from: 1, to: (vector.count-1), by: 1){
            for index  in stride(from: 0, to: (vector.count-2), by: 1){
                if(vector[index]>vector[index+1]){
                swap(i: index, j: (index+1))
                }
            }
        }
    }

    func swap(i: Int, j: Int){
        let aux = vector[i]
        vector[i]=vector[j]
        vector[j]=aux
    }
    
    func quickSort(inicio: Int, final: Int) {
        var i=inicio
        var j=final
        let pivot = vector[((inicio+final)/2)]
        repeat{
            while(vector[i]<pivot){
                i += 1
            }
            while(vector[j]>pivot){
                j -= 1
            }
            if(i<=j){
                swap(i: i,j: j)
                i += 1
                j -= 1
            }
            
        } while (i<=j)
        if(inicio<j){
            quickSort(inicio: inicio, final: j)
        }
        if(i<final){
            quickSort(inicio: i, final: final)
        }
    }
    
    func selection() {
        var m = 0
        var temp = 0
        for index in 0...vector.count-1{
            m=index
            for index2 in stride(from: index+1, to: (vector.count-1), by: 1){
                if(vector[index2]<vector[index]){
                    m=index2
                }
            }
            temp=vector[index]
            vector[index]=vector[m]
            vector[m]=temp
        }
    }
    override func fetch(n: Int) -> Int {
        var centro: Int = 0 //declaracion de bordes y centro
        var inicio: Int = 0
        var fin: Int = (vector.count-1)
        
        while(inicio<=fin){ //inicio de ciclo para no usar recursividad
            centro=(inicio+fin)/2 //se calcula el valor del centro
            
            if(self.vector[centro]==n){return centro} //se regresa la posicion del numero al ser encontrado
            
            if(n < self.vector[centro]){ //Si el dato es menor que el valor centro
                fin = centro-1 //mover el borde final a centro -1
            } else {
                inicio = centro+1 //mover el borde inicio a centro +1
            }
        }
        return -1 //en caso de no encontrar el numero se regresa -1
    }
}

class secuencial: FetchClass{
    override func fetch(n: Int) -> Int {
        let count:Int = (vector.count-1)
        for i in 0...count{//se crea un loop que recorre el arreglo completo
            if(self.vector[i]==n){return i}//al encontrar el numero buscado regresa su posicion
        }
        return -1//en caso de no encontrarlo se regresa -1
    }
}

//var test: secuencial = secuencial()
//test.setV(v: test.randomV(n: 30))
//test.showV()
//test.showF(n: test.fetch(n: 50))

var test2: binario = binario()
test2.setV(v: test2.randomV(n: 30))
//test2.burbuja()
//test2.quickSort(inicio: 0, final: (test2.vector.count-1))
test2.vector=test2.mergeSort(array: test2.vector)
test2.showV()
test2.showF(n: test2.fetch(n: 15))
