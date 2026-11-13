function DisplayFactor(ino)
{
    console.log("Factors of : ",ino)
    for(iCnt =1 ; iCnt<=ino/2; iCnt++)
    {
        if(ino % iCnt == 0)
        {
            console.log(iCnt)
        }
    }
}

function main()
{
    let iValue = 12
    DisplayFactor(iValue)
}

main()