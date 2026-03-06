// 函数名称: sub_4d6530
// 虚拟地址: 0x4d6530
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4d6530(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    
    if (*(arg1 + 0xc) s<= 0)
        return 
    
    int32_t* ecx = *(arg1 + 8)
    uint32_t eax
    
    if (ecx == 0)
        sub_489550(eax, &data_5b2591, "mpTail != NULL", "d:\ax\trunk\ax2017\engine\xlist.h", 0x5a, 
            "XList<struct DefParseItem *>::GetTail")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* ecx_1 = *ecx
    eax.b = (arg2 u>> 9).b & 1
    *(ecx_1 + 0x10) = eax.b
    *(ecx_1 + 0x11) = (arg2 u>> 0xa).b & 1
}
