class Capsule{
	private String field1;
	private int field2;
	private int field3;

	public void setField1(String a){
		field1 = a;
	}

	public void setField2(int a){
		field2 = a;
	}

	public void setField3(int a){
		field3 = a;
	}

	public String getField1(){
		return field1;
	}

	public int getField2(){
		return field2;
	}

	public int getField3(){
		return field3;
	}
}

class Encapsulation{
	public static void main(String[] args) {
		Capsule obj = new Capsule();

		obj.setField1("Drug101");
		obj.setField2(17);
		obj.setField3(44);

		//System.out.println(obj.field1);

		System.out.println(obj.getField1());
		System.out.println(obj.getField2());
		System.out.println(obj.getField3());
	}
}