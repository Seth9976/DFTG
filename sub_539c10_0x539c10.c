// 函数名称: sub_539c10
// 虚拟地址: 0x539c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_539c10(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x38) != 0)
    if (*(arg1 + 0x38) != 0)
        void* eax = nullptr
    label_539c21:
        void* ebx_1 = *(arg1 + 0x38)
        void* edi_1 = ebx_1
        
        if (eax != 0)
            eax += 0x24c
        else
            eax = ebx_1
        
        void* edx_2 = *(arg1 + 0x3c) * 0x24c + edi_1
        
        if (eax u< edx_2)
            do
                int32_t ecx = *(eax + 0x248)
                
                if ((ecx & 0xffff0000) != 0)
                    int32_t edx_3 = *(arg1 + 0x44)
                    *(arg1 + 0x44) = zx.d(ecx.w)
                    *(eax + 0x248) = edx_3
                    *(arg1 + 0x48) -= 1
                    goto label_539c21
                
                eax += 0x24c
            while (eax u< edx_2)
            
            edi_1 = ebx_1
        
        *(arg1 + 0x3c) = 0
        *(arg1 + 0x44) = 0
        
        if (edi_1 != 0)
            _aligned_free_base(edi_1)
        
        __builtin_memset(arg1 + 0x38, 0, 0x14)
        *(arg1 + 0x50) = 0
    
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
    
    int32_t* ecx_2 = *(arg1 + 4)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 8))(ecx_2)
    
    int32_t* ecx_3 = data_1151ae8
    
    if (ecx_3 != 0)
        sub_4984f0(ecx_3, 0x64)
        data_1151ae8 = 0
}
