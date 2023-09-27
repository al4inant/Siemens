#include "../inc/swilib.h"
#include "i2c.h"

/*
void callback(void *i2c_msg, int err)
{
  if(!err)
}
*/

int i2c_pmu_write(short reg, char *data, void (*callback)(void *i2c_msg, int err), short cdata, int len)
{ 
  I2C_MSG msg;
  zeromem(&msg, sizeof(I2C_MSG));
  msg.addr = 0x31;
  msg.mode = 0;
  msg.tf = 0;
  msg.unk = 0;
  msg.nRegister = reg;
  msg.cdata = cdata;
  msg.data = data;
  msg.callback = callback;
  msg.size = len;
  return i2c_transfer(&msg);
}

int i2c_pmu_read(short reg, char *val, void (*callback)(void *i2c_msg, int err), short cdata, int len)
{
  I2C_MSG msg;
  zeromem(&msg, sizeof(I2C_MSG));
  msg.addr = 0x31;
  msg.mode = 0;
  msg.tf = 0;
  msg.unk = 0;
  msg.nRegister = reg;
  msg.cdata = cdata;
  msg.data = val;
  msg.callback = callback;
  msg.size = len;
  return i2c_receive(&msg);
}

#ifdef ELKA
int i2cw_cam(short reg, char *val, void (*callback)(void *i2c_msg, int err) )
{
  I2C_MSG msg;
  zeromem(&msg, sizeof(I2C_MSG));
  msg.addr = 0xB0;
  msg.mode = 0;
  msg.tf = 0;
  msg.unk = 0;
  msg.nRegister = reg;
  msg.cdata = 0;
  msg.data = val;
  msg.callback = callback;
  msg.size = 1;
  return i2c_transfer(&msg);
}

int i2cr_cam(short reg, char *val, void (*callback)(void *i2c_msg, int err))
{
  I2C_MSG msg;
  zeromem(&msg, sizeof(I2C_MSG));  
  msg.addr = 0xB0;
  msg.mode = 4;
  msg.tf = 0;
  msg.unk = 0;
  msg.nRegister = reg;
  msg.cdata = 0;
  msg.data = val;
  msg.callback = callback;
  msg.size = 1;
  return i2c_receive(&msg);
}
#endif

//��� ������� ��������
int i2cw(char addr, char * data, int len)
{  
  I2C_MSG msg;
  zeromem(&msg, sizeof(I2C_MSG));
  msg.addr = addr;
  msg.mode = 2;
  msg.tf = 0;
  msg.unk = 0;
  msg.nRegister = 0;
  msg.cdata = 0;
  msg.data = data;
  msg.callback = 0; //callback;
  msg.size =len;
  return i2c_transfer(&msg);
}

