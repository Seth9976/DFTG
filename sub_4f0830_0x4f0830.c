// 函数名称: sub_4f0830
// 虚拟地址: 0x4f0830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f0830(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s>= 0 && arg2 s< *(arg1 + 0x10))
    if (arg2 s>= 0 && arg2 s< *(arg1 + 0x10))
        return *(*(arg1 + 0xc) + (arg2 << 2))
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
        "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
