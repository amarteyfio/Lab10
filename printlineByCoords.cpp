void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    for(int x1; x1 < MaxPntsSize; x1++){
        for(int x2;x2 < MaxPntsSize; x2++;){
            for(int y1; y1 < MaxPntsSize; y1 ++){
                for(int y2; y2 < MaxPntsSize; y2++){
                    linesArray[MaxLnsSize] >> {"("+ x1 + "," + y1 + "," + x2 + "," + y2 +")" };
                    cout << linesArray[MaxLnsSize]
                }

            }

        }
         
    }
    
}
