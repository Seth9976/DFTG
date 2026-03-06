// 函数名称: sub_4f0c00
// 虚拟地址: 0x4f0c00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f0c00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    
    if (arg2 s>= 0 && arg2 s< *(arg1 + 0x10))
        return *(*(*(arg1 + 0xc) + (arg2 << 2)) + 0x24)
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
        "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
