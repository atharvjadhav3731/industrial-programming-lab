class InfiniteLoopDecrementFlaw
{
    public static void main(String[] args) 
    {
        Iteration iteration = new Iteration();
        iteration.display();

    }
}

class Iteration
{
    public void display()
    {
        int iCnt =0;
        for(iCnt = 6 ;  iCnt <=6; iCnt--)    // Infinite Loop
        {
            System.out.println("Jay Ganesh ...");
        }
    }
}

