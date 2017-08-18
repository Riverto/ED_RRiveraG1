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
            v.append(Int(rand() % 200)) //en caso de que esta linea no funcione comentarla y descomentar la siguiente
            //v.append(Int(arc4random_uniform(200)))
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
        func sort()
    }

class binario: FetchClass, Sorting{
    func sort() {
    var m = 0
    var temp = 0
    for index in 0...vector.count-1{
        m=index
        for index2 in stride(from: index+1, to: vector.count-1, by: 1){
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
        var fin: Int = self.vector.count-1
        
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
        let count:Int = self.vector.count-1
        for i in 0...count{//se crea un loop que recorre el arreglo completo
            if(self.vector[i]==n){return i}//al encontrar el numero buscado regresa su posicion
        }
        return -1//en caso de no encontrarlo se regresa -1
    }
}

var test: secuencial = secuencial()
test.setV(v: test.randomV(n: 400))
test.showV()
test.showF(n: test.fetch(n: 50))

var test2: binario = binario()
test2.setV(v: test2.randomV(n: 30))
test2.sort()
test2.showV()
test2.showF(n: test2.fetch(n: 15))
