//Functional Programming
using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

        // Functional approach using LINQ and lambda expressions
        var result = numbers
            .Where(n => n % 2 == 0)     
            .Select(n => n * n)        
            .Sum();                     

        Console.WriteLine($"Sum of squares of even numbers: {result}");
    }
}

//OOP
using System;

class BankAccount
{
    public string AccountHolder { get; set; }
    public decimal Balance { get; private set; }

    public BankAccount(string accountHolder, decimal initialBalance)
    {
        AccountHolder = accountHolder;
        Balance = initialBalance;
    }

    public void Deposit(decimal amount)
    {
        Balance += amount;
        Console.WriteLine($"Deposited {amount:C}. New balance: {Balance:C}");
    }

    public void Withdraw(decimal amount)
    {
        if (amount <= Balance)
        {
            Balance -= amount;
            Console.WriteLine($"Withdrawn {amount:C}. New balance: {Balance:C}");
        }
        else
        {
            Console.WriteLine("Insufficient funds.");
        }
    }
}

class Program
{
    static void Main()
    {
        // Object-oriented approach to bank account
        BankAccount account = new BankAccount("John Doe", 1000);
        account.Deposit(500);
        account.Withdraw(200);
    }
}
