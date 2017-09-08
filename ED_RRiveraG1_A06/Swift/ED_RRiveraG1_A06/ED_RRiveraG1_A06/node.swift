//
//  node.swift
//  ED_RRiveraG1_A06
//
//  Created by Roberto Rivera on 9/7/17.
//  Copyright © 2017 Riverto. All rights reserved.
//

import Foundation

class node {
    var data:Int = 0
    var next:node?
    init(){
        self.data=0
        self.next=nil
    }
    init(data: Int){
        self.data = data
        self.next=nil
    }
    init(data: Int, next: node){
        self.data = data
        self.next = next
    }
    func toString()->String{
        return String(self.data)
    }
}
