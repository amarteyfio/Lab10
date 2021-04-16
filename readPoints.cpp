void readPoints(ifstream inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int numPoints){

     inPutPointFile();

    while (inPutPointFile >> pointsArray[numPoints]){
        cout << pointsArray[numPoints];
    }

    MaxPntsSize = sizeof(pointsArray[numPoints])

    
}
