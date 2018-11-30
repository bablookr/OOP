abstract class Shape{
	String field1;

	abstract double abstractMethod1();
	public abstract String abstractMethod2();

	public Shape(String a) { 
        System.out.println("Shape constructor called"); 
        this.field1 = a; 
    } 

     public String method1() { 
        return field1; 
    } 
}

class Circle extends Shape{
	double radius;

	public Circle(String a,double b) { 
        super(a); 
        System.out.println("Circle constructor called"); 
        this.radius = b; 
    } 

    @Override
    double abstractMethod1(){
    	return Math.PI * Math.pow(radius,2);
    }

    @Override
    public String abstractMethod2(){
    	return (super.field1+"\n"+abstractMethod1());
    }
}

class Rectangle extends Shape{
	double length;
	double width;

	public Rectangle(String a,double b,double c){
		super(a);
		System.out.println("Rectangle constructor called");
		this.length = b;
		this.width = c;
	}

	@Override
	double abstractMethod1(){
		return length*width;
	}

	@Override
	public String abstractMethod2(){
		return (super.field1+"\n"+abstractMethod1());
	}
}


class Abstraction{
	public static void main(String[] args) {
		Shape obj1 = new Circle("Red",2.0);
		Shape obj2 = new Rectangle("Blue",3,4);

		System.out.println(obj1.abstractMethod2());
		System.out.println(obj2.abstractMethod2());
	}
}