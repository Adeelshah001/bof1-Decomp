extern u8 D_03004830[];
extern u8 D_03002AB0[];
void sub_08004EA0(s32 arg0);
void sub_0800C078(void);
void sub_0800C718(void);
void sub_0800C024(void)
{
  s8 val;
  if (((struct 
  {
    u8 pad[0x2B];
    s8 unk2B;
  } *) D_03004830)->unk2B == 1)
  {
    sub_0800C718();
    return;
  }
  if (((struct 
  {
    u8 pad[0x2B];
    s8 unk2B;
  } *) D_03004830)->unk2B == 2)
  {
    sub_0800C078();
    return;
  }
  ((struct 
  {
    u8 pad[0x2C];
    s8 unk2C;
  } *) D_03004830)->unk2C = 0x1E;
  ((struct 
  {
    u8 pad[0x2B];
    u8 unk2B;
  } *) D_03004830)->unk2B = ((struct 
  {
    u8 pad[0x2B];
    s8 unk2B;
  } *) D_03004830)->unk2B + 1;
  D_03002AB0[0xB8] |= 4;
  sub_08004EA0(0x8190);
  sub_0800C718();
}

