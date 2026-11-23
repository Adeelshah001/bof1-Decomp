typedef struct 
{
  u8 pad00[0x3E];
  u8 unk3E;
  u8 pad3F[0x50 - 0x3F];
  u8 unk50;
  u8 pad51[0x54 - 0x51];
  u16 unk54;
  u8 pad56[0xB8 - 0x56];
  u16 unkB8;
} Entity4E8;
typedef struct 
{
  u8 pad00[0x06];
  u16 unk6;
} Struct16E0;
typedef struct 
{
  u8 pad00[0xB1];
  u8 unkB1;
} Struct4620;
extern Struct16E0 D_030016E0;
extern Struct4620 D_03004620;
extern u16 D_030016A8;
void sub_08037A74(s32);
u8 sub_0804ECA0(Entity4E8 *);
void sub_0804E878(Entity4E8 *arg0);
void sub_0804E8C4(Entity4E8 *arg0);
u8 sub_0804ECA0(Entity4E8 *arg0);
inline int inline_fn(u32 arg0, int arg1)
{
  return arg0 & arg1;
}

u8 sub_0804ECF0(void)
{
  int new_var;
  u8 ret;
  u32 cnt = D_03004620.unkB1 + 1;
  new_var = 0;
  D_03004620.unkB1 = cnt;
  if (inline_fn(cnt, 1))
  {
    u16 val = D_030016A8;
    u8 lo = inline_fn(0x1F, val);
    u32 hi = inline_fn(val >> 8, 0x1F);
    ret = 0;
    if (hi <= 0xF)
    {
      hi++;
    }
    if (lo != new_var)
    {
      lo--;
    }
    else
    {
      ret = 1;
    }
    D_030016A8 = (hi << 8) | lo;
  }
  return ret;
}

