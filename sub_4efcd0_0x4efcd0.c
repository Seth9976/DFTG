// 函数名称: sub_4efcd0
// 虚拟地址: 0x4efcd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4efcd0(int32_t* arg1)
{
    // 第一条实际指令: char** ecx = arg1[1]
    char** ecx = arg1[1]
    
    if (ecx != 0)
        sub_4d4bb0(ecx)
    
    arg1[3]
    sub_4cead0(*arg1)
    int32_t* eax = sub_4d7f80(arg1[3])
    
    if (eax != 0)
        void* edx_2 = arg1[3]
        arg1[1] = eax
        int32_t* result = sub_4d60d0(eax, edx_2)
        *arg1 = result
        return result
    
    sub_489550(eax, &data_5b2591, "pParseTree", "d:\ax\trunk\ax2017\engine\material.cpp", 0x38d, 
        "MaterialMakeDatalessFailureAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
