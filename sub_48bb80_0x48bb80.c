// 函数名称: sub_48bb80
// 虚拟地址: 0x48bb80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_48bb80(int32_t** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t** var_8 = arg1
    int32_t** var_8 = arg1
    char const* const var_18
    int32_t var_14
    char const* const var_10_1
    void** eax
    char* ecx
    
    if (arg2 s<= 0xfde8)
        if (arg1[2] == 0)
            var_8 = sub_48b100()
            return sub_4362d0(arg1, &var_8)
        
        eax = arg1[1]
        
        if (eax != 0)
            void* result = *eax
            
            if (0xfde8 - *(result + 0xfdec) - *(result + 0xfde8) s>= arg2)
                return result
            
            var_8 = sub_48b100()
            return sub_4362d0(arg1, &var_8)
        
        var_10_1 = "XList<struct NetBuffer *>::GetTail"
        var_14 = 0x5a
        var_18 = "d:\ax\trunk\ax2017\engine\xlist.h"
        ecx = "mpTail != NULL"
    else
        var_10_1 = "NetBufferMakeRoom"
        var_14 = 0x230
        var_18 = "d:\ax\trunk\ax2017\engine\network.cpp"
        ecx = "roomNeeded <= NETWORK_BUFFER_SIZE"
    
    sub_489550(eax, &data_5b2591, ecx, var_18, var_14, var_10_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
