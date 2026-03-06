// 函数名称: sub_42f370
// 虚拟地址: 0x42f370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_42f370(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = data_6cfe4c
    void* esi = data_6cfe4c
    
    if (esi == 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_1 = sub_426880(esi + 0x848, arg1)
    int32_t* eax_2 = sub_426880(esi + 0x848, arg2)
    int32_t ebx
    ebx.b = sub_42f2f0(eax_1)
    uint32_t eax_4 = sub_42f2f0(eax_2)
    
    if (ebx.b != 0)
        if (eax_4.b != 0)
            goto label_42f3c8
        
        eax_4.b = 1
        return eax_4
    
    if (eax_4.b == 0)
    label_42f3c8:
        
        if (eax_1[2] == eax_2[2] && eax_1[3] == eax_2[3])
            int32_t eax_5
            eax_5.b = arg1 s< arg2
            return eax_5
    
    eax_4.b = 0
    return eax_4
}
