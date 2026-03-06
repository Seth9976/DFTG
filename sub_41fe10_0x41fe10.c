// 函数名称: sub_41fe10
// 虚拟地址: 0x41fe10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_41fe10(char arg1, char arg2)
{
    // 第一条实际指令: void* esi = data_6cfe4c
    void* esi = data_6cfe4c
    int32_t ebx
    ebx.b = arg2
    ebx:1.b = arg1
    
    if (esi == 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_1 = *(esi + 0x14)
    void* edx = data_aca0dc
    
    if (eax_1 != 0)
        uint32_t ecx = zx.d(eax_1.w)
        
        if (ecx u< *(edx + 4))
            int128_t* ecx_2 = ecx * 0x4c + *edx
            
            if (*(ecx_2 + 0x48) == eax_1)
                sub_48b510(ecx_2)
    
    *(esi + 0x18) = 0
    void* result = sub_4267b0(esi + 0x848)
    
    if (ebx:1.b == 0)
        return result
    
    return ___std_atomic_wait_indirect@24(ebx.b) __tailcall
}
