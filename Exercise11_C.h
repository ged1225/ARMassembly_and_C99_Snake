/*********************************************************************/
/* Lab Exercise Twelve                                               */
/* Name:  Gabriel Dombrowski                                         */
/* Date:  November 22, 2019                                          */
/* Class:  CMPE 250                                                  */
/* Section:  1                                                       */
/*********************************************************************/
typedef int Int32;
typedef short int Int16;
typedef char Int8;
typedef unsigned int UInt32;
typedef unsigned short int UInt16;
typedef unsigned char UInt8;

/*assembly variables*/
extern Int8 Velocity;
extern Int8 GameActive;
extern Int8 GameWon;
extern Int8 GameLost;
extern Int8 Difficulty;
extern UInt32 AdSnakeQYRecord;
extern UInt32 AdSnakeQXRecord;
extern Int8 PITCounter;

/* assembly language subroutines */
char GetCharI (void);
void GetStringI (char String[], int StringBufferCapacity);
void Init_UART0_IRQ (void);
void Init_PIT_IRQ(void);
void PutCharI (char Character);
void PutNumHexI (UInt32 address);
void PutNumI (UInt8 byte);
void PutStringI (char String[], int StringBufferCapacity);
void NewLineI (void);
int  Dequeue(UInt32 address);
void Enqueue(Int8 byte, UInt32 address);
Int8 ReadSnakeQ(Int8 byte, UInt32 address);
Int8 ReadFirstQ(UInt32 address);
void InitSnakeQs(void);
int TXQEmpty(void);
