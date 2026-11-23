typedef struct 
{
  u8 pad00[0x36];
  u8 unk36;
} Struct_03004830;
typedef struct 
{
  u8 pad00[0xA4];
  u16 unkA4;
} Struct_030023E0;
extern u8 D_030023E0[];
void sub_08039054(void);
void sub_0800359C(void);
void sub_0802FEE0(void);
void sub_08002CCC(u16);
s32 sub_080031D4(u8 arg0)
{
  Struct_03004830 *s;
  u8 val;
  val = (unsigned char) arg0;
  if (!(val & 1))
  {
    s = (Struct_03004830 *) D_03004830;
    val = 0x82;
  }
  else
  {
    s = (Struct_03004830 *) D_03004830;
    val = 0x81;
  }
  s->unk36 = val;
  sub_08039054();
  sub_0800359C();
  sub_0802FEE0();
  sub_08002CCC(((Struct_030023E0 *) D_030023E0)->unkA4);
  return 0;
}

