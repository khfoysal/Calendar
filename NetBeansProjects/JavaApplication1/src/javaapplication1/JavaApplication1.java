/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication1;

/**
 *
 * @author HUAWEI
 */
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
            A a=new A();
            A b=new A();
            
            a.a=10;
            b.a=15;
            a.a=b.a;
            b.a=45;
            System.out.println(a.a);
        
    }
    
}
class A{
    int a;
}

