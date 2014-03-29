#import <Foundation/Foundation.h>
#import "FBFontSymbol.h"
#define PI 3.14159265358979323846
@interface FBSquareFont : NSObject
+ (void)drawSymbol:(FBFontSymbolType)symbol
horizontalEdgeLength:(CGFloat)horizontalEdgeLength
  verticalEdgeLength:(CGFloat)verticalEdgeLength
          startPoint:(CGPoint)startPoint
           inContext:(CGContextRef)ctx;
@end
