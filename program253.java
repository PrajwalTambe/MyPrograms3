import java.util.*;

abstract class ArrayX
{
   public int Arr[];
   
   public Arrayx(int size)
   {
	   Arr=new int[size];
   }
   
   public void Accept()
   {
	   Scanner sobj = new Scanner(System.in);
	   
	   System.out.println("Enter the elements");
		for(int i = 0; i< Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
	   
   }
   
   public void Display()
   {
	    System.out.println("Enter data is ");
		for(int i = 0; i<Arr.length;i++)
		{
	      System.out.println(Arr[i]);	
		}
	  
   }   
   public abstract boolean search (int no);
}


class Searching extends Arrayx
{
	public Searching(int Size)
	{
		super (size);
	}
	   public boolean search (int no);
	   {
		   int i =0;
		   for(i = 0; i< Arr.length;i++)
		   {
			   if(Arr[i]==no)		   
		        {
			       break;
				}
	   }
	   if(i == Array.length)
	   {
		   return false;
	   }
	   else
	   {
		   return true;
	   }
    }
}
class program253
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array");
		int size = sobj.nextInt();
	
	    Searching obj= new Searching(size);
          
        obj.Accept();
        obj.Display();		
		
		
		System.out.println("Enter the number to Search");
		int no = sobj.nextInt();
		
		boolean bret= obj.search(no);
		if(bret == true)
		{
			System.out.println("Element is there in array");
		}
		else
		{
			System.out.println("There is no elements in array");
		}			
	}
}
