typedef struct 
{
  u8 pad00[0x18];
  u32 unk18;
  u8 pad1C[0x2A - 0x1C];
  u16 unk2A;
} Struct_080332C0;
extern u8 D_0300169C;
extern const u8 D_0821DDC8[];
void sub_080332C0(Struct_080332C0 *arg0)
{
  const u8 *table[1] = {D_0821DDC8};
  u32 idx = arg0->unk2A >> 1;
  const u8 *base = table[D_0300169C];
  const u8 *p = base + (3 * (2 * idx));
  idx = p[0];
  arg0->unk18 = (idx | (p[1] << 8)) | (p[2] << 16);
}

