extern const u8 D_081529CD[];
void sub_08038278(void);
void sub_080892C0(u8 *);
void sub_08083BB4(u8 *);
typedef struct 
{
  u8 p0[2];
  u16 unk2;
  u8 p4[2];
  u16 unk6;
  u8 p8[0x3B - 8];
  u8 unk3B;
  u8 p3C[0x4C - 0x3C];
  u8 unk4C;
  u8 unk4D;
  u8 p4E[6];
  u8 unk54;
  u8 unk55;
  u8 p56[0x70 - 0x56];
  u8 unk70;
  u8 p71[0xE4 - 0x71];
  u16 unkE4;
  u16 unkE6;
} E4;
void sub_08089330(E4 *);
void sub_08089330(E4 *arg0);
void sub_08089268(u8 *arg0)
{
  u16 new_var;
  u8 v = arg0[0x4D];
  if (v == 1)
  {
    sub_080892C0(arg0);
  }
  else
    if (v == 2)
  {
    sub_08089330((E4 *) arg0);
  }
  else
  {
    u8 t;
    arg0[0x4C] = 4;
    arg0[0x4D]++;
    new_var = (u16) (arg0[0x3B] - 1);
    t = D_081529CD[new_var];
    arg0[0x61] = t;
    arg0[0x70] = 4;
  }
}

void sub_08089208(u8 *arg0);
