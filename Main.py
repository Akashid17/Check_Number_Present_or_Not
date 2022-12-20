
def CheckNumber(iArr):

    iRet = 0

    for y in range(0,len(iArr)):

        if iArr[y] == 11:
            iRet = 1
            break

    if iRet == 1:
        return True
    else:
        return False
            
def main():

    print("Enter Count of Elements")

    iSize = int(input())

    iElements = [0]*iSize

    if len(iElements) == 0:
        print("Unable to Allocate Memory")
        return

    print("Enter ",iSize," Elements")

    for x in range (0,iSize):
        iElements[x] = int(input())

    bResult = CheckNumber(iElements)

    if bResult == True:
        print("11 is Present")
    else:
        print("11 is Absent")

if __name__ == "__main__":
    main()