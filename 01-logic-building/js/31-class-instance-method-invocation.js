class Demo
{
    constructor (a,b)
    {
        this.no1 = a
        this.no2 = b
        console.log("Inside Constructor")
    }
    Display()
    {
        console.log("Inside Display")
    }
}

function main()
{
    dobj = new Demo(51,101)
    console.log(dobj.no1)
    console.log(dobj.no2)

    dobj.Display()
}

main()