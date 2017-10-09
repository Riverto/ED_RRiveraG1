package ED.Riverto;

import java.util.Arrays;

public class palindromo {
    private Stack<Character> stackPalabra;
    private char[] original;

    public palindromo(String palabra){
        palabra = palabra.toLowerCase();
        palabra = palabra.replaceAll("[^a-zA-Z0-9]","");//borra caracteres especiales
        palabra = palabra.replace(" ","");//borra espacios
        original = palabra.toCharArray();
        stackPalabra = arrayToStack(original);
    }

    public Stack arrayToStack(char[] array){
        Stack<Character> tempStack = new Stack<>();
        for(char temp : array){
            tempStack.push(temp);
        }
        return tempStack;
    }

    public boolean esPalidromo(){
        int size = stackPalabra.getSize();
        String tempString ="";
        for(int i=0; i<size; i++){
            tempString+=stackPalabra.pop();
        }
        char[] reversed = tempString.toCharArray();
        return Arrays.equals(original,reversed);
    }
}
