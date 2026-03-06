// 函数名称: sub_4f0fd0
// 虚拟地址: 0x4f0fd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f0fd0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t var_c
    char const* const var_8
    int32_t result
    char* ecx_1
    
    if (arg2 s< 0 || arg2 s>= *(arg1 + 0x10))
        var_8 = "AttribTagGetField"
        var_c = 0x8b
        ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
    else
        result = *(*(*(arg1 + 0xc) + (arg2 << 2)) + 0xc)
        
        if (result != 0)
            return result
        
        var_8 = "AttribTagGetDefMap"
        var_c = 0x1fe
        ecx_1 = "pAttribField->pDefMap"
    
    sub_489550(result, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\attribmap.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
