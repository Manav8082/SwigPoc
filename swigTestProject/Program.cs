namespace swigTestProject
{
    internal class Program
    {
        static void Main(string[] args)
        {
            MyClass myClass = new MyClass();
            Console.WriteLine(myClass.add(3, 5));
            Console.ReadKey();
        }
    }
}
