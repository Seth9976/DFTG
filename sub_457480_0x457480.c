// 函数名称: sub_457480
// 虚拟地址: 0x457480
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_457480(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* ebx = arg4
    int32_t* ebx = arg4
    void* edi = arg3
    int32_t ecx = arg2[3]
    void* var_8 = edi
    int32_t result
    
    if ((ecx & 0x8000) != 0)
        result = ebx[1]
        int32_t result_1 = 0xffffffff
        int32_t esi_1 = 0
        
        if (result s> 0)
            while (true)
                if (esi_1 s< 0)
                    goto label_457716
                
                if (esi_1 s>= result)
                    goto label_457716
                
                result = *(*ebx + (esi_1 << 2)) * 3
                void* ebx_1 = *(var_8 + (result << 3))
                
                if (*(ebx_1 + 0xc) s> 6)
                    break
                
                result = *(sub_457270(*(ebx_1 + 8)) + (*(ebx_1 + 0xc) << 2))
                
                if (result_1 != 0 && result != 0)
                    if (result_1 == 0xffffffff)
                        result_1 = result
                    else if (result_1 != result)
                        goto label_45752f
                
                ebx = arg4
                esi_1 += 1
                result = ebx[1]
                
                if (esi_1 s>= result)
                    ecx = arg2[3]
                    goto label_457508
            
            goto label_457538
        
    label_457508:
        edi = var_8
    
    if ((ecx & 0x10000) != 0)
        int32_t edx = *(edi + 0x3c0)
        result = 0
        int32_t esi_2
        
        if (edx s> 0)
            void* ecx_5 = edi + 4
            
            while (*ecx_5 != 2)
                result += 1
                ecx_5 += 0x18
                
                if (result s>= edx)
                    goto label_45752f
            
            result *= 3
            esi_2 = *(edi + (result << 3) + 8)
        
        if (edx s<= 0 || esi_2 == 0xffffffff)
        label_45752f:
            result.b = 0
            return result
        
        int32_t edx_1 = ebx[1]
        int32_t i = 0
        
        if (edx_1 s<= 0)
            goto label_457589
        
        while (i s>= 0)
            if (i s>= edx_1)
                break
            
            result = *(*ebx + (i << 2)) * 3
            
            if (*(edi + (result << 3) + 8) != esi_2)
                goto label_45752f
            
            i += 1
            
            if (i s>= edx_1)
                goto label_457589
        
        goto label_457716
    
    label_457589:
    result = ebx[1]
    int32_t edi_1 = 0
    char const* const var_28
    int32_t var_24
    char const* const var_20
    char* ecx_6
    
    if (result s<= 0)
    label_4576cc:
        int32_t i_1 = 0
        __builtin_memcpy(arg5, var_8, 0x3c8)
        result = ebx[1]
        
        if (result s<= 0)
        label_45770f:
            result.b = 1
            return result
        
        while (i_1 s>= 0)
            if (i_1 s>= result)
                break
            
            int32_t eax_10 = *(*ebx + (i_1 << 2))
            i_1 += 1
            void* ecx_13 = arg5 + eax_10 * 0x18
            *(ecx_13 + 4) = 5
            *(ecx_13 + 0xc) = *arg2
            *(ecx_13 + 0x10) = arg2[1]
            result = ebx[1]
            
            if (i_1 s>= result)
                goto label_45770f
        
    label_457716:
        var_20 = "XArray<int>::operator []"
        var_24 = 0xc3
        ecx_6 = "index >= 0 && index < mSize"
        var_28 = "d:\ax\trunk\ax2017\engine\xarray.h"
    else
        while (true)
            if (edi_1 s< 0)
                goto label_457716
            
            if (edi_1 s>= result)
                goto label_457716
            
            void* ebx_2 = var_8 + *(*ebx + (edi_1 << 2)) * 0x18
            result = *(ebx_2 + 4)
            
            if (result != 0)
                if (result != 1)
                    goto label_45752f
                
                void* esi_3 = *ebx_2
                
                if (*(esi_3 + 0xc) s> 6)
                    break
                
                if (*(sub_457270(*(esi_3 + 8)) + (*(esi_3 + 0xc) << 2)) != 0)
                    goto label_45752f
            
            void* esi_4 = *ebx_2
            result = *(esi_4 + 8)
            int32_t ecx_10 = arg2[3]
            
            if ((ecx_10 & 0x100) != 0 && result != 1)
                goto label_45752f
            
            if ((ecx_10 & 0x200) != 0 && result == 1)
                goto label_45752f
            
            if ((ecx_10 & 0x800) != 0 && result != 2 && result != 4)
                goto label_45752f
            
            if ((ecx_10 & 0x2000) != 0 && result != 3 && result != 5)
                goto label_45752f
            
            result = sub_457400(esi_4 + 8)
            int32_t edx_2 = arg2[3]
            
            if ((edx_2 & 0x4000) != 0 && result != 1)
                goto label_45752f
            
            int32_t ecx_12 = *(esi_4 + 0x10)
            
            if (ecx_12 - 9 u> 4)
                goto label_45752f
            
            if ((edx_2 & 0x20000) != 0 && ecx_12 != 9 && ecx_12 != 0xc)
                goto label_45752f
            
            if ((edx_2 & 0x100000) != 0 && ecx_12 != 0xa)
                goto label_45752f
            
            if ((edx_2 & 0x200000) != 0 && ecx_12 != 0xb)
                goto label_45752f
            
            if ((edx_2 & &__dos_header) != 0 && ecx_12 != 0xd)
                goto label_45752f
            
            ebx = arg4
            edi_1 += 1
            result = ebx[1]
            
            if (edi_1 s>= result)
                goto label_4576cc
        
    label_457538:
        var_20 = "GetSide"
        var_24 = 0x150b
        var_28 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_6 = "die.face <= 6"
    
    sub_489550(result, &data_5b2591, ecx_6, var_28, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
