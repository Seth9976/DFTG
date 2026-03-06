// 函数名称: sub_4ce720
// 虚拟地址: 0x4ce720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4ce720(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = *arg1
    int32_t result = *arg1
    
    if (result != 0)
        if (result != arg2)
            result = _aligned_free_base(result)
            *arg1 = 0
        
        return result
    
    sub_489550(result, &data_5b2591, "*pString", "d:\ax\trunk\ax2017\engine\definition.cpp", 0x17c, 
        "DefinitionDeleteString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
