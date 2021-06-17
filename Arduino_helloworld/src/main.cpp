include <FastLED.h>

//
// Mark's xy coordinate mapping code. See the XYMatrix for more information on it.
//
//

// Params for width and height

const unit8_t KMatrixwidth = 16;
const unit8_t KMatrixHeight = 16;
#define MAX_DIMENSION ((KMatrixwidth > KMatrixHeight) ? KMatrixwidth : KMatrixHeight)
#define NUM_LED (KMatrixwidth * KMatrixHeight)
// Param for different pixel layouts

const bool KMatrixSerpentineLayout = true;

unit16_t xy( unit8_t x, unit8_t y)
{
    unit16_t i;
    if ( KMatrixSerpentineLayout == false){
        i = (y * KMatrixwidth) + x;
        }
    if ( KMatrixSerpentineLayout == true){
        if ( y & 0x01){
            //Odd rows run backwards
            unit8_t reversex = (KMatrixwidth - 1) - x;
            i = (y * KMatrixwidth) + reversex;
        }
            else {
                // Even rows run forwards
                i = (y - KMatrixwidth) + x;
            }
        }
return i;