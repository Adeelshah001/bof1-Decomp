void sub_0807CB08(void);
void sub_08037FC4(void *arg0, s32 arg1);
void sub_0808C0AC(void *arg0);
struct Unk8BF2C
{
  u8 pad00[0x02];
  u16 unk2;
  u8 pad04[0x06 - 0x04];
  u16 unk6;
  u8 pad08[0x2C - 0x08];
  u16 unk2C;
  u8 pad2E[0x40 - 0x2E];
  u8 unk40;
  u8 pad41[0x4C - 0x41];
  u8 unk4C;
  u8 unk4D;
  u8 pad4E[0x50 - 0x4E];
  u8 unk50;
  u8 pad51[0x55 - 0x51];
  u8 unk55 : 8;
  u8 pad56[0x74 - 0x56];
  void *unk74;
};
void sub_0808BF2C(struct Unk8BF2C *arg0)
{
  u8 *ptr;
  u8 *new_var;
  u32 zero;
  u32 a;
  u32 b;
  arg0->unk40 = 0;
  a = 0xF28;
  b = 0x2F18;
  arg0->unk2 = a;
  arg0->unk6 = b;
  arg0->unk2C = b;
  sub_0807CB08();
  sub_08037FC4(arg0, 2);
  arg0->unk74 = arg0;
  arg0->unk55 = 5;
  do
  {
    sub_0808C0AC(arg0);
  }
  while (!((--arg0->unk55) & 0x80));
  new_var = &arg0->unk4C;
  ptr = new_var;
  zero = 0;
  *(ptr++) = 2;
  *ptr = 0xC;
  arg0->unk50 = zero;
}

