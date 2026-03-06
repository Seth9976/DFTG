// 函数名称: sub_4539b0
// 虚拟地址: 0x4539b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4539b0(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int64_t* edi = nullptr
    void* var_8 = esi
    int32_t ecx = *(esi + 0x2d0)
    int32_t eax = *(esi + 0x664)
    int32_t* edx
    int32_t ebx
    
    if (ecx == 0)
        int32_t var_10
        ebx = var_10
        edx = nullptr
    else
        edx = sub_452c30(ecx)
        ebx = edx[0xa]
    
    int32_t var_14
    int64_t* eax_2 = sub_4538b0(&var_14)
    
    while (edx != var_14)
        if (edx == 0)
            sub_489550(eax_2, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x5da, "Dice::DiceIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t esi_1 = *(esi + 0x4cc)
        int32_t ecx_1 = 0
        
        if (esi_1 s<= 0)
        label_453a1c:
            ecx_1.b = 0
        else
            int32_t* eax_4 = var_8 + 0x33c
            
            while (*eax_4 != edx[0xb])
                ecx_1 += 1
                eax_4 = &eax_4[1]
                
                if (ecx_1 s>= esi_1)
                    goto label_453a1c
            
            ecx_1.b = 1
        
        eax_2 = edi + 1
        
        if (ecx_1.b == 0)
            eax_2 = edi
        
        edi = eax_2
        
        if (ebx != 0)
            eax_2 = sub_452c30(ebx)
            edx = eax_2
            ebx = edx[0xa]
        else
            edx = nullptr
        
        esi = var_8
    
    return eax - edi
}
