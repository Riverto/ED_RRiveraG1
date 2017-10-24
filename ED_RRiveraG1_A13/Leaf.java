package ED.Riverto;

public class Leaf {
    private int data;
    Leaf left;
    Leaf right;

    Leaf(){
        left=right=null;
        data=0;
    }

    Leaf(int d){
        left=right=null;
        data=d;
    }

    public void print(){
        System.out.println(data);
    }

    public int getData(){
        return data;
    }

    public void setData(int d){
        data=d;
    }
}
