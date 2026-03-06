// 函数名称: sub_421d10
// 虚拟地址: 0x421d10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_421d10(int32_t arg1)
{
    // 第一条实际指令: void* ebx = data_6cfe4c
    void* ebx = data_6cfe4c
    
    if (ebx == 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_1 = sub_437f10(*(data_6d00d8 + 0xbe4))
    *(eax_1 + 0x110) = 0
    void* eax_2 = sub_437f10(*(data_6d00d8 + 0xbe4))
    *(eax_2 + 0x244) -= 1
    sub_437ba0(data_6d00d8)
    int32_t esi_1 = *(eax_2 + 0x244)
    *(ebx + 0x834) = 1
    *(ebx + 0x838) = esi_1
    *(ebx + 0x868) = esi_1
    sub_436a90(ebx, ebx + 0x868, eax_1 + 0x10, 5, arg1)
    sub_45d9c0(ebx + 0x868, 0x5b4f80)
    return sub_438a30(ebx + 0x868, esi_1)
}
