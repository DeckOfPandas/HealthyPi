 /* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * + Pin number +  ZERO Board pin  |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Digital Low      |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 0          | 0 -> RX          |  PA11  |                 | EIC/EXTINT[11] ADC/AIN[19]           PTC/X[3] *SERCOM0/PAD[3]  SERCOM2/PAD[3]  TCC0/WO[3]  TCC1/WO[1]
 * | 1          | 1 <- TX          |  PA10  |                 | EIC/EXTINT[10] ADC/AIN[18]           PTC/X[2] *SERCOM0/PAD[2]                  TCC0/WO[2]  TCC1/WO[0]
 * | 2          | 2                |  PA14  |                 | EIC/EXTINT[14]                                 SERCOM2/PAD[2]  SERCOM4/PAD[2]  TC3/WO[0]   TCC0/WO[4]
 * | 3          | ~3               |  PA09  |                 | EIC/EXTINT[9]  ADC/AIN[17]           PTC/X[1]  SERCOM0/PAD[1]  SERCOM2/PAD[1] *TCC0/WO[1]  TCC1/WO[3]
 * | 4          | ~4               |  PA08  |                 | EIC/NMI        ADC/AIN[16]           PTC/X[0]  SERCOM0/PAD[0]  SERCOM2/PAD[0] *TCC0/WO[0]  TCC1/WO[2]
 * | 5          | ~5               |  PA15  |                 | EIC/EXTINT[15]                                 SERCOM2/PAD[3]  SERCOM4/PAD[3] *TC3/WO[1]   TCC0/WO[5]
 * | 6          | ~6               |  PA20  |                 | EIC/EXTINT[4]                        PTC/X[8]  SERCOM5/PAD[2]  SERCOM3/PAD[2]             *TCC0/WO[6]
 * | 7          | 7                |  PA21  |                 | EIC/EXTINT[5]                        PTC/X[9]  SERCOM5/PAD[3]  SERCOM3/PAD[3]              TCC0/WO[7]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Digital High     |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 8          | ~8               |  PA06  |                 | EIC/EXTINT[6]  ADC/AIN[6]  AC/AIN[2] PTC/Y[4]  SERCOM0/PAD[2]                 *TCC1/WO[0]
 * | 9          | ~9               |  PA07  |                 | EIC/EXTINT[7]  ADC/AIN[7]  AC/AIN[3] PTC/Y[5]  SERCOM0/PAD[3]                 *TCC1/WO[1]
 * | 10         | ~10              |  PA18  |                 | EIC/EXTINT[2]                        PTC/X[6] +SERCOM1/PAD[2]  SERCOM3/PAD[2] *TC3/WO[0]    TCC0/WO[2]
 * | 11         | ~11              |  PA16  |                 | EIC/EXTINT[0]                        PTC/X[4] +SERCOM1/PAD[0]  SERCOM3/PAD[0] *TCC2/WO[0]   TCC0/WO[6]
 * | 12         | ~12              |  PA19  |                 | EIC/EXTINT[3]                        PTC/X[7] +SERCOM1/PAD[3]  SERCOM3/PAD[3]  TC3/WO[1]   *TCC0/WO[3]
 * | 13         | ~13              |  PA17  | LED             | EIC/EXTINT[1]                        PTC/X[5] +SERCOM1/PAD[1]  SERCOM3/PAD[1] *TCC2/WO[1]   TCC0/WO[7]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Analog Connector |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 14         | A0               |  PA02  | A0              | EIC/EXTINT[2] *ADC/AIN[0]  DAC/VOUT  PTC/Y[0]
 * | 15         | A1               |  PB08  | A1              | EIC/EXTINT[8] *ADC/AIN[2]            PTC/Y[14] SERCOM4/PAD[0]                  TC4/WO[0]
 * | 16         | A2               |  PB09  | A2              | EIC/EXTINT[9] *ADC/AIN[3]            PTC/Y[15] SERCOM4/PAD[1]                  TC4/WO[1]
 * | 17         | A3               |  PA04  | A3              | EIC/EXTINT[4] *ADC/AIN[4]  AC/AIN[0] PTC/Y[2]  SERCOM0/PAD[0]                  TCC0/WO[0]
 * | 18         | A4               |  PA05  | A4              | EIC/EXTINT[5] *ADC/AIN[5]  AC/AIN[1] PTC/Y[5]  SERCOM0/PAD[1]                  TCC0/WO[1]
 * | 19         | A5               |  PB02  | A5              | EIC/EXTINT[2] *ADC/AIN[10]           PTC/Y[8]  SERCOM5/PAD[0]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Wire             |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 20         | SDA              |  PA22  | SDA             | EIC/EXTINT[6]                        PTC/X[10] *SERCOM3/PAD[0] SERCOM5/PAD[0] TC4/WO[0] TCC0/WO[4]
 * | 21         | SCL              |  PA23  | SCL             | EIC/EXTINT[7]                        PTC/X[11] *SERCOM3/PAD[1] SERCOM5/PAD[1] TC4/WO[1] TCC0/WO[5]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |SPI (Legacy ICSP) |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 22         | 1                |  PA12  | MISO            | EIC/EXTINT[12] SERCOM2/PAD[0] *SERCOM4/PAD[0] TCC2/WO[0] TCC0/WO[6]
 * |            | 2                |        | 5V0             |
 * | 23         | 4                |  PB10  | MOSI            | EIC/EXTINT[10]                *SERCOM4/PAD[2] TC5/WO[0]  TCC0/WO[4]
 * | 24         | 3                |  PB11  | SCK             | EIC/EXTINT[11]                *SERCOM4/PAD[3] TC5/WO[1]  TCC0/WO[5]
 * |            | 5                |        | RESET           |
 * |            | 6                |        | GND             |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | LEDs             |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 25         |                  |  PB03  | RX              |
 * | 26         |                  |  PA27  | TX              |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | USB              |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 27         |                  |  PA28  | USB_HOST_ENABLE | EIC/EXTINT[8]
 * | 28         |                  |  PA24  | USB_NEGATIVE    | *USB/DM
 * | 29         |                  |  PA25  | USB_POSITIVE    | *USB/DP
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | EDBG             |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 30         |                  |  PB22  | EDBG_UART TX    | *SERCOM5/PAD[2]
 * | 31         |                  |  PB23  | EDBG_UART RX    | *SERCOM5/PAD[3]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 32         |                  |  PA22  | EDBG_SDA        | Pin 20 (SDA)
 * | 33         |                  |  PA23  | EDBG_SCL        | Pin 21 (SCL)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 34         |                  |  PA19  | EDBG_MISO       | EIC/EXTINT[3] *SERCOM1/PAD[3] SERCOM3/PAD[3] TC3/WO[1]  TCC0/WO[3]
 * | 35         |                  |  PA16  | EDBG_MOSI       | EIC/EXTINT[0] *SERCOM1/PAD[0] SERCOM3/PAD[0] TCC2/WO[0] TCC0/WO[6]
 * | 36         |                  |  PA18  | EDBG_SS         | EIC/EXTINT[2] *SERCOM1/PAD[2] SERCOM3/PAD[2] TC3/WO[0]  TCC0/WO[2]
 * | 37         |                  |  PA17  | EDBG_SCK        | EIC/EXTINT[1] *SERCOM1/PAD[1] SERCOM3/PAD[1] TCC2/WO[1] TCC0/WO[7]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 38         | ATN              |  PA13  | EDBG_GPIO0      | EIC/EXTINT[13] SERCOM2/PAD[1] SERCOM4/PAD[1] *TCC2/WO[1] TCC0/WO[7]
 * | 39         |                  |  PA21  | EDBG_GPIO1      | Pin 7
 * | 40         |                  |  PA06  | EDBG_GPIO2      | Pin 8
 * | 41         |                  |  PA07  | EDBG_GPIO3      | Pin 9
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |                  |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | GND              |        |                 |
 * | 42         | AREF             |  PA03  |                 | EIC/EXTINT[3] *[ADC|DAC]/VREFA ADC/AIN[1] PTC/Y[1]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |32.768KHz Crystal |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            |                  |  PA00  | XIN32           | EIC/EXTINT[0] SERCOM1/PAD[0] TCC2/WO[0]
 * |            |                  |  PA01  | XOUT32          | EIC/EXTINT[1] SERCOM1/PAD[1] TCC2/WO[1]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */

#include <SPI.h>
#include "wiring_private.h" // pinPeripheral() function
#include "ads1292r.h"
#include "afe4490.h"

#define IOPORT_PIN_LEVEL_HIGH 1
#define IOPORT_PIN_LEVEL_LOW 0

#define ADS1292R_CS_PIN   3
#define ADS1292R_START_PIN 10
#define ADS1292R_PWDN_PIN 12
#define ADS1292R_DRDY_PIN A4


#define AFE4490_START_PIN  16//A2
#define AFE4490_CS_PIN     15//A1
#define AFE4490_DRDY_PIN   A0 
//SPI class(MISO

SPIClass ads1292rSPI (&sercom2, 4, 0, 1, SPI_PAD_2_SCK_3, SERCOM_RX_PAD_0);
//SPI class(MISO
SPIClass afe4490SPI (&sercom0, 17, 9 , 8, SPI_PAD_2_SCK_3, SERCOM_RX_PAD_0);    // ads1220 17 -->PA4 9-->  8-->

int8_t NewDataAvailable;
uint8_t data_len = 19;

volatile byte MSB;
volatile byte data;
volatile byte LSB;

volatile byte *SPI_RX_Buff_Ptr;
unsigned long resultTemp = 0;
signed long sresultTemp,sresultTempResp ;
volatile float fresultTemp = 0;
volatile long iresultTemp = 0;
volatile long voltageTemp = 0;
volatile bool ads1292DataReceived = false;
volatile uint8_t  SPI_Dummy_Buff[10];
volatile long count=0;
volatile uint8_t    DataPacket[44];
uint8_t AFE4490_SPI_TX_Buff[10];
volatile uint8_t  AFE4490_SPI_RX_Buff[3]={0,0,0};
volatile uint32_t AFE4490resultTemp = 0;
volatile int32_t AFE4490sresultTempIR,AFE4490sresultTempRED;
volatile float AFE4490fresultTemp = 0;
volatile int32_t AFE4490iresultTemp = 0;
volatile int32_t AFE4490voltageTemp = 0;
volatile bool afe4490DataReceived = false;


void ads1292_detection_callback(void)
{
       digitalWrite(ADS1292R_CS_PIN,LOW);

     for (int x = 0; x < 9 ; x++)
    {
      SPI_Dummy_Buff[x] = ads1292rSPI.transfer(0xff);
      // SerialUSB.print(SPI_Dummy_Buff[x],HEX); 
    }

     digitalWrite(ADS1292R_CS_PIN,HIGH);
    resultTemp = (unsigned long)((0x00 << 24) | (SPI_Dummy_Buff[6] << 16)| SPI_Dummy_Buff[7] << 8 | SPI_Dummy_Buff[8]);//6,7,8
    resultTemp = (unsigned long)(resultTemp << 8);

    sresultTemp = (signed long)(resultTemp);
    sresultTemp = (signed long)(sresultTemp >> 8);   //  resultTemp = (uint32_t)(resultTemp << 8);
    

    resultTemp = (uint32_t)((0x00 << 24) | (SPI_Dummy_Buff[3] << 16)| SPI_Dummy_Buff[4] << 8 | SPI_Dummy_Buff[5]);//6,7,8
    resultTemp = (uint32_t)(resultTemp << 8);

    sresultTempResp = (long)(resultTemp);
    sresultTempResp = (sresultTempResp >> 8);   //  resultTemp = (uint32_t)(resultTemp << 8);
    ads1292DataReceived = true;
  
}

void afe4490_detection_callback(void)
{
   //   extint_chan_disable_callback(DRDY_EIC_LINE, EXTINT_CALLBACK_TYPE_DETECT);
   
  /* AFE4490Write(CONTROL0,0x000001);  
  
   AFE4490_SPI_TX_Buff[0] =  0x2C;

   digitalWrite(AFE4490_CS_PIN,LOW);
   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[0]);
  
   AFE4490_SPI_RX_Buff[0] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[1] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[2] =  afe4490SPI.transfer(0xff);
   
   AFE4490resultTemp = (uint32_t)( ((0x00 << 24) | AFE4490_SPI_RX_Buff[0] << 16)| AFE4490_SPI_RX_Buff[1] << 8 | AFE4490_SPI_RX_Buff[2]);
   AFE4490resultTemp = (uint32_t)(AFE4490resultTemp << 10);
    
   AFE4490sresultTempIR = (int32_t)(AFE4490resultTemp );
   AFE4490sresultTempIR = (AFE4490sresultTempIR >> 10);// * 100;
   
   AFE4490_SPI_TX_Buff[0] =  0x2A;

   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[0]);
  
   AFE4490_SPI_RX_Buff[0] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[1] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[2] =  afe4490SPI.transfer(0xff);
   
   AFE4490resultTemp = (uint32_t)( ((0x00 << 24) | AFE4490_SPI_RX_Buff[0] << 16)| AFE4490_SPI_RX_Buff[1] << 8 | AFE4490_SPI_RX_Buff[2]);
   AFE4490resultTemp = (uint32_t)(AFE4490resultTemp << 10);
   
   AFE4490sresultTempRED = (int32_t)(AFE4490resultTemp );
   AFE4490sresultTempRED = (AFE4490sresultTempRED >> 10);// * 100;   
   
   digitalWrite(AFE4490_CS_PIN,HIGH); */
   afe4490DataReceived = true;
  
   count++;
}

void setup() {
  SerialUSB.begin(115200);
 
  // do this first, for Reasons

  ads1292Rbegin();

   delay(100);
   afe4490begin();   
}

uint8_t i = 0;
void loop() {

  if(!(millis()%1000))
  {
       SerialUSB.println(count); // print to check
       //AFE4490Write(CONTROL0,0x000008);
    count = 0;
  }
  
    if(afe4490DataReceived == true)
  {


    AFE4490Write(CONTROL0,0x000001);  
  
   AFE4490_SPI_TX_Buff[0] =  0x2C;

   digitalWrite(AFE4490_CS_PIN,LOW);
   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[0]);
  
   AFE4490_SPI_RX_Buff[0] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[1] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[2] =  afe4490SPI.transfer(0xff);
   
   AFE4490resultTemp = (uint32_t)( ((0x00 << 24) | AFE4490_SPI_RX_Buff[0] << 16)| AFE4490_SPI_RX_Buff[1] << 8 | AFE4490_SPI_RX_Buff[2]);
   AFE4490resultTemp = (uint32_t)(AFE4490resultTemp << 10);
    
   AFE4490sresultTempIR = (int32_t)(AFE4490resultTemp );
   AFE4490sresultTempIR = (AFE4490sresultTempIR >> 10);// * 100;
   
   AFE4490_SPI_TX_Buff[0] =  0x2A;

   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[0]);
  
   AFE4490_SPI_RX_Buff[0] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[1] =  afe4490SPI.transfer(0xff);
   AFE4490_SPI_RX_Buff[2] =  afe4490SPI.transfer(0xff);
   
   AFE4490resultTemp = (uint32_t)( ((0x00 << 24) | AFE4490_SPI_RX_Buff[0] << 16)| AFE4490_SPI_RX_Buff[1] << 8 | AFE4490_SPI_RX_Buff[2]);
   AFE4490resultTemp = (uint32_t)(AFE4490resultTemp << 10);
   
   AFE4490sresultTempRED = (int32_t)(AFE4490resultTemp );
   AFE4490sresultTempRED = (AFE4490sresultTempRED >> 10);// * 100;   
   
   digitalWrite(AFE4490_CS_PIN,HIGH);
  
    DataPacket[0] = 0x0A;  // sync0
    DataPacket[1] = 0xFA;
    DataPacket[2] = (uint8_t) (data_len);
    DataPacket[3] = (uint8_t) (data_len>>8);
    DataPacket[4] = 0x02;

    DataPacket[5] =  (sresultTemp);
    DataPacket[6] = (sresultTemp>>8);
    DataPacket[7] =  (sresultTemp >> 16);
    DataPacket[8] =  (sresultTemp >>24);
    
    DataPacket[9] =  (sresultTempResp);
    DataPacket[10] =  (sresultTempResp >> 8);
    DataPacket[11] =  (sresultTempResp >> 16);
    DataPacket[12] =  (sresultTempResp >>24);    

    DataPacket[13] =  AFE4490sresultTempRED;
    DataPacket[14] =  AFE4490sresultTempRED>>8;
    DataPacket[15] =  AFE4490sresultTempRED>>16;
    DataPacket[16] =  AFE4490sresultTempRED>>24;
    
    DataPacket[17] =  AFE4490sresultTempIR;
    DataPacket[18] =  AFE4490sresultTempIR>>8;
    DataPacket[19] =  AFE4490sresultTempIR>>16;
    DataPacket[20] =  AFE4490sresultTempIR>>24;
    
    DataPacket[21] =  0x1C;
    DataPacket[22] =  120;
    DataPacket[23] =  80;
      
    DataPacket[24] = 0x00;
    DataPacket[25] = 0x0b;
  
   for(int i=0; i<26; i++) // transmit the data
   {
     SerialUSB.write(DataPacket[i]);
              
   }
    afe4490DataReceived =  false;
    
    }

}


void ads1292Rbegin()
{

  ads1292rSPI.begin();
  

  pinMode(ADS1292R_START_PIN, OUTPUT);
  pinMode(ADS1292R_DRDY_PIN, INPUT);
  pinMode(ADS1292R_DRDY_PIN, INPUT_PULLUP);
  attachInterrupt(ADS1292R_DRDY_PIN, ads1292_detection_callback , FALLING);
  pinMode(ADS1292R_PWDN_PIN, OUTPUT);

  
  pinMode(ADS1292R_CS_PIN, OUTPUT);
 
   pinPeripheral(4, PIO_SERCOM_ALT);
   pinPeripheral(0, PIO_SERCOM_ALT);
   pinPeripheral(1, PIO_SERCOM_ALT);
  
   ads1292rSPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE1));
  
  SPI_Reset();                                            
  delay(100);       

  ADS1292_Disable_Start();
  delay(100);                                               

  ADS1292_Enable_Start();
  delay(10);  

 
  ADS1292_Hard_Stop();
  ADS1292_Start_Data_Conv_Command();
  ADS1292_Soft_Stop(); 

  digitalWrite(ADS1292R_CS_PIN,LOW);

  ADS1292_Reg_Write(0x01,0x00);     //Set sampling rate to 125 SPS
  delay(10);
  
  ADS1292_Reg_Write(0x02,0b10100000); //Lead-off comp off, test signal disabled
  delay(10);
  ADS1292_Reg_Write(0x03,0b00010000); //Lead-off defaults
  delay(10);
  ADS1292_Reg_Write(0x04,0b01000000);   //Ch 1 enabled, gain 6, connected to electrode in
  delay(10);
  ADS1292_Reg_Write(0x05,0b01100000);   //Ch 2 enabled, gain 6, connected to electrode in
  delay(10);
  ADS1292_Reg_Write(0x06,0b00101100); //RLD settings: fmod/16, RLD enabled, RLD inputs from Ch2 only
  delay(10);
  ADS1292_Reg_Write(0x07,0x00);   //LOFF settings: all disabled
  delay(10);
  //Skip register 8, LOFF Settings default
  
  ADS1292_Reg_Write(0x09,0b11110010); //Respiration: MOD/DEMOD turned only, phase 0
  delay(10);
  ADS1292_Reg_Write(0x0A,0b00000011); //Respiration: Calib OFF, respiration freq defaults
  delay(10);

  ADS1292_Enable_Start();
  
  ADS1292_Start_Read_Data_Continuous();
  
  digitalWrite(ADS1292R_CS_PIN,HIGH); //release chip, signal end transfer

  SPI_Start();
  delay(100);
}




void writeRegister(uint8_t address, uint8_t value)
{
  digitalWrite(ADS1292R_CS_PIN,LOW);
  delay(5);
  ads1292rSPI.transfer(WREG|(address<<2));        
  ads1292rSPI.transfer(value); 
  delay(5);
  digitalWrite(ADS1292R_CS_PIN,HIGH);
}  


uint8_t readRegister(uint8_t address)
{
  uint8_t data;

  digitalWrite(ADS1292R_CS_PIN,LOW);
  delay(5);
  ads1292rSPI.transfer(RREG|(address<<2));        
//  data = ads1292rSPI.transfer(SPI_MASTER_DUMMY); 
  delay(5);
  digitalWrite(ADS1292R_CS_PIN,HIGH);

  return data;
}  


uint8_t * Read_Data()
{
  static byte SPI_Buff[3];

  if((digitalRead(ADS1292R_DRDY_PIN)) == LOW)                //        Wait for DRDY to transition low
  {
    digitalWrite(ADS1292R_CS_PIN,LOW);                          //Take CS low
    delayMicroseconds(100);
    for (int i = 0; i < 3; i++)
    { 
     // SPI_Buff[i] = ads1292rSPI.transfer(SPI_MASTER_DUMMY);
    }
    delayMicroseconds(100);
    digitalWrite(ADS1292R_CS_PIN,HIGH);                      //  Clear CS to high
    NewDataAvailable = true;
  }
    
  return SPI_Buff;
}

void SPI_Reset()
{
  digitalWrite(ADS1292R_PWDN_PIN, IOPORT_PIN_LEVEL_HIGH);
  delay(20);
  digitalWrite(ADS1292R_PWDN_PIN, IOPORT_PIN_LEVEL_LOW);
  delay(20);
  digitalWrite(ADS1292R_PWDN_PIN, IOPORT_PIN_LEVEL_HIGH);
  delay(20); 
  ADS1292_SPI_Command_Data(RESET);                              
}

void SPI_Start()
{
  ADS1292_SPI_Command_Data(START);
}

void SPI_Stop()
{
  ADS1292_SPI_Command_Data(STOP);
}



void ADS1292_Reg_Write (unsigned char READ_WRITE_ADDRESS, unsigned char DATA)
{
  uint8_t  SPI_TX_Buff[10];
  
  switch (READ_WRITE_ADDRESS)
  {
  
    case 1: DATA = DATA & 0x87;
        break;
        
    case 2: DATA = DATA & 0xFB;
        DATA |= 0x80;
        break;
        
    case 3: DATA = DATA & 0xFD;
        DATA |= 0x10;
        break;
        
    case 7: DATA = DATA & 0x3F;
        break;
        
    case 8: DATA = DATA & 0x5F;
        break;
        
    case 9:DATA |= 0x02;
        break;
        
    case 10:DATA = DATA & 0x87;
        DATA |= 0x01;
        break;
        
    case 11:DATA = DATA & 0x0F;
        break;
        
    default:break;
  }   
  
  SPI_TX_Buff[0] = READ_WRITE_ADDRESS | WREG;
  SPI_TX_Buff[1] = 0;           // Write Single byte
  SPI_TX_Buff[2] = DATA;          // Write Single byte         // Write Single byte

  digitalWrite(ADS1292R_CS_PIN,LOW);
  delay(5);
  ads1292rSPI.transfer( SPI_TX_Buff[0]);        
  ads1292rSPI.transfer(SPI_TX_Buff[1]); 
  ads1292rSPI.transfer(SPI_TX_Buff[2]); 
  delay(5);
  digitalWrite(ADS1292R_CS_PIN,HIGH);
}

void ADS1292_Enable_Start(void)
{
  digitalWrite(ADS1292R_START_PIN, IOPORT_PIN_LEVEL_HIGH);
  delay(20);
}

void ADS1292_Disable_Start(void)
{
  digitalWrite(ADS1292R_START_PIN, IOPORT_PIN_LEVEL_LOW);
  delay(20);
}

void ADS1292_Hard_Stop (void)
{
  digitalWrite(ADS1292R_START_PIN, IOPORT_PIN_LEVEL_LOW);
  delay(100);
}

void ADS1292_Start_Data_Conv_Command (void)
{
  ADS1292_SPI_Command_Data(START);
}

void ADS1292_Soft_Stop (void)
{
  ADS1292_SPI_Command_Data(STOP);  
}

void ADS1292_Start_Read_Data_Continuous (void)
{
  ADS1292_SPI_Command_Data(RDATAC);         // Send 0x10 to the ADS1x9x
}


void ADS1292_SPI_Command_Data(unsigned char data_in)
{
  digitalWrite(ADS1292R_CS_PIN, LOW);
  delay(2);
  digitalWrite(ADS1292R_CS_PIN, HIGH);
  delay(2);
  digitalWrite(ADS1292R_CS_PIN, LOW);
  delay(2);
  ads1292rSPI.transfer(data_in);
  delay(2);
  digitalWrite(ADS1292R_CS_PIN, HIGH);
}

void afe4490begin()
{
  
  afe4490SPI.begin();
  delay(100);
  pinMode(AFE4490_START_PIN, OUTPUT);
  digitalWrite(AFE4490_START_PIN, HIGH);
  pinMode(AFE4490_DRDY_PIN, INPUT);
  pinMode(AFE4490_DRDY_PIN, INPUT_PULLUP);
  attachInterrupt(AFE4490_DRDY_PIN, afe4490_detection_callback , FALLING);
  delay(100);
  pinMode(AFE4490_CS_PIN, OUTPUT);
 
  pinPeripheral(17, PIO_SERCOM_ALT);
  pinPeripheral(9, PIO_SERCOM_ALT);
  pinPeripheral(8, PIO_SERCOM_ALT);
  delay(100); 
  afe4490SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));  

  AFE4490Write(CONTROL0,0x000000);

  AFE4490Write(CONTROL0,0x000008);

   AFE4490Write(TIAGAIN,0x000000); // CF = 5pF, RF = 500kR
   AFE4490Write(TIA_AMB_GAIN,0x000001);
   
   AFE4490Write(LEDCNTRL,0x001414);
   AFE4490Write(CONTROL2,0x000000); // LED_RANGE=100mA, LED=50mA
   AFE4490Write(CONTROL1,0x010707); // Timers ON, average 3 samples
   
   AFE4490Write(PRPCOUNT, 0X001F3F);

   AFE4490Write(LED2STC, 0X001770); //timer control
   AFE4490Write(LED2ENDC,0X001F3E); //timer control
   AFE4490Write(LED2LEDSTC,0X001770); //timer control
   AFE4490Write(LED2LEDENDC,0X001F3F); //timer control
   AFE4490Write(ALED2STC, 0X000000); //timer control
   AFE4490Write(ALED2ENDC, 0X0007CE); //timer control
   AFE4490Write(LED2CONVST,0X000002); //timer control
   AFE4490Write(LED2CONVEND, 0X0007CF); //timer control
   AFE4490Write(ALED2CONVST, 0X0007D2); //timer control
   AFE4490Write(ALED2CONVEND,0X000F9F); //timer control

   AFE4490Write(LED1STC, 0X0007D0); //timer control
   AFE4490Write(LED1ENDC, 0X000F9E); //timer control
   AFE4490Write(LED1LEDSTC, 0X0007D0); //timer control
   AFE4490Write(LED1LEDENDC, 0X000F9F); //timer control
   AFE4490Write(ALED1STC, 0X000FA0); //timer control
   AFE4490Write(ALED1ENDC, 0X00176E); //timer control
   AFE4490Write(LED1CONVST, 0X000FA2); //timer control
   AFE4490Write(LED1CONVEND, 0X00176F); //timer control
   AFE4490Write(ALED1CONVST, 0X001772); //timer control
   AFE4490Write(ALED1CONVEND, 0X001F3F); //timer control

   AFE4490Write(ADCRSTCNT0, 0X000000); //timer control
   AFE4490Write(ADCRSTENDCT0,0X000000); //timer control
   AFE4490Write(ADCRSTCNT1, 0X0007D0); //timer control
   AFE4490Write(ADCRSTENDCT1, 0X0007D0); //timer control
   AFE4490Write(ADCRSTCNT2, 0X000FA0); //timer control
   AFE4490Write(ADCRSTENDCT2, 0X000FA0); //timer control
   AFE4490Write(ADCRSTCNT3, 0X001770); //timer control
   AFE4490Write(ADCRSTENDCT3, 0X001770);

}

void AFE4490Write (uint8_t address, uint32_t data)
{

  
    AFE4490_SPI_TX_Buff[0] =  address;
    AFE4490_SPI_TX_Buff[1] = ((data >> 16) & 0xFF) ;
    AFE4490_SPI_TX_Buff[2] = ((data >> 8) & 0xFF);            // Write Single byte
    AFE4490_SPI_TX_Buff[3] = (data & 0xFF);         // Write Single byte         // Write Single byte

   digitalWrite(AFE4490_CS_PIN,LOW);
   delay(5);
   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[0]);        
   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[1]); 
   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[2]); 
   afe4490SPI.transfer(AFE4490_SPI_TX_Buff[3]);
   delay(5);
   digitalWrite(AFE4490_CS_PIN,HIGH);
}



