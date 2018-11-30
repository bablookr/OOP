class Class1{
	public int field1;
	public int field2;

	public Class1(int a,int b){
		this.field1 = a;
		this.field2 = b;
	}

	public void method1(int a){
		field2-=a;
	}

	public void method2(int a){
		field2+=a;
	}

	public String method3(){
		return ("field1="+field1+"\nfield2="+field2);
	}
}

class Class2 extends Class1{
	public int field3;

	public Class2(int a,int b,int c){
		super(a,b);
		field3 = c;
	}

	public void method4(int a){
		field3 = a;
	}

	@Override
	public String method3(){
		return (super.method3()+"\nfield3="+field3);
	}
}

class Inheritance{
	public static void main(String[] args) {
		Class2 obj = new Class2(3,100,25);
		System.out.println(obj.method3());
	}
}