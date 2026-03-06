// 函数名称: ??1_LocaleUpdate@@QAE@XZ
// 虚拟地址: 0x57c27a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcall??1_LocaleUpdate@@QAE@XZ(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[3].b != 0)
    if (arg1[3].b != 0)
        void* eax = *arg1
        *(eax + 0x350) &= 0xfffffffd
}
