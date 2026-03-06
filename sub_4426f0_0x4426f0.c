// 函数名称: sub_4426f0
// 虚拟地址: 0x4426f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4426f0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t* arg5, uint32_t* arg6, int32_t* arg7, int32_t* arg8)
{
    // 第一条实际指令: uint32_t* ebx = arg6
    uint32_t* ebx = arg6
    int32_t edx = 0
    uint32_t esi = data_138fd54
    void* ecx_1 = arg3 + 0x18 + arg2 * 0x1bc
    uint32_t var_8 = esi
    uint32_t eax_1 = esi + 1
    void* var_c = ecx_1
    int32_t edi_1 = *arg7
    data_138fd54 = eax_1
    
    if (edi_1 s> 0)
        do
            void* esi_1 = ecx_1 + (ebx[edx] << 3)
            ecx_1 = *(arg3 + (sx.d(*(esi_1 + 0x12)) + 0xbb) * 0xc)
            eax_1 = *(data_1390320 + (esi << 2) + 0xa8)
            
            if (*(ecx_1 + 0x18) == eax_1)
                eax_1 = zx.d(*(esi_1 + 0xc))
                int32_t esi_2 = data_1390320
                ebx = arg6
                
                if (eax_1 == *(esi_2 + (var_8 << 2) + 0x148))
                    if ((*(ecx_1 + 0x1c) & 0x200) == 0)
                        break
                    
                    eax_1 = var_8
                    
                    if (*(esi_2 + (eax_1 << 2) + 0x1e8) == 0)
                        break
            
            ecx_1 = var_c
            edx += 1
        while (edx s< edi_1)
        
        esi = var_8
    
    if (edx != edi_1)
        eax_1 = ebx[edx]
        ecx_1 = nullptr
        *ebx = eax_1
        int32_t* ebx_2 = arg5
        edx = *ebx_2
        
        if (edx s> 0)
            while (true)
                int32_t esi_3 = arg4[ecx_1]
                eax_1 = zx.d(*(var_c + (esi_3 << 3) + 0xc))
                
                if (eax_1 == *(data_1390320 + (esi << 2) + 8))
                    ebx_2 = arg5
                    *arg4 = esi_3
                    edx = *ebx_2
                    break
                
                ecx_1 += 1
                
                if (ecx_1 s>= edx)
                    ebx_2 = arg5
                    break
        
        if (ecx_1 != edx)
            *arg8 = *(data_1390320 + (var_8 << 2) + 0x1e8)
            int32_t result
            
            if (edx == 1 || *arg7 == 1)
                result = 1
            else
                result = 0
            
            *arg7 = 1
            *ebx_2 = 1
            return result
    
    sub_4394f0(eax_1, edx, ecx_1, "Couldn't find die from ship!\n")
    _exit(1)
    noreturn
}
