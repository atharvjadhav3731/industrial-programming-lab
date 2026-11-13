function SumFactor(ino)
{
    for(iCnt =1, iSum = 0 ; iCnt<=ino/2; iCnt++)
    {
        if(ino % iCnt == 0)
        {
            iSum = iSum + iCnt
        }
    }
    return iSum
}

function main()
{
    let iValue = 12
    let iRet = 0
    iRet = SumFactor(iValue)

    console.log("Summation of Factoe : ", iRet)
}

main()