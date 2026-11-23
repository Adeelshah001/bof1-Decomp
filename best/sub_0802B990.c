typedef struct 
{
  u8 pad0[2];
  u16 unk2;
  u8 pad4[2];
  u16 unk6;
} ActorLike;
typedef struct 
{
  u8 pad0[6];
  u16 unk6;
} Global03002AB0;
extern u8 D_03002AB0[];
extern u8 D_0202B1C0[];
s32 sub_0802B954(ActorLike *arg0, ActorLike *arg1);
s32 sub_0802B990(ActorLike *arg1)
{
  u8 val = 0;
  u8 new_var;
  u8 *base = D_0202B1C0;
  u32 off = 0x5CE;
  base[off] = val;
  off += 1;
  new_var = val;
  base[off] = new_var;
  off += 0x1F;
  do
  {
    do
    {
      base[off] = val;
    }
    while (0);
    D_0202B1C0[0x5EF] = val;
    arg1->unk2 = 0xE08;
    arg1->unk6 = (off = 0x2E04);
  }
  while (0);
  return 0;
}

s32 sub_0802B9D4(ActorLike *arg1);
s32 sub_0802BA1C(ActorLike *arg1);
