void sub_0807B27C(Entity *);
void sub_08083300(Entity *, u32);
void sub_0808BEB8(Entity *);
s32 sub_0807CE30(u8 *);
void sub_0807CB08(void);
void sub_0808BE30(u8 *, u32, u32);
u16 sub_0807B2BC(void *);
void sub_0808C428(Entity *);
void sub_0807C638(Entity *, u32);
extern u8 D_03004F50[];
extern const u16 D_081529E0[];
extern const u16 D_081529EC[];
void sub_0808BE80(Entity *entity);
void sub_0808BDCC(u8 *entity)
{
  u8 *saved = entity;
  u8 state = 0x25;
  int new_var;
  entity[0xE1] = state;
  new_var = 0xA20;
  if (sub_0807CE30(saved) != 0)
  {
    sub_0808BE30(saved, 8, new_var);
  }
  else
  {
    u32 value;
    state = 6;
    saved[0xE0] = state;
    sub_0807CB08();
    value = 0x1030;
    sub_0808BE30(saved, 14, value);
  }
}

void sub_0808BF98(Entity *entity);
void sub_0808C0AC(Entity *entity);
