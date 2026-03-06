// 函数名称: sub_51e310
// 虚拟地址: 0x51e310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __thiscallsub_51e310(void* arg1, void* arg2)
{
    // 第一条实际指令: void* result = arg2
    void* result = arg2
    
    if (result != 0)
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u< *(arg1 + 0x4244))
            int32_t* esi_2 = ecx * 0x14c + *(arg1 + 0x4240)
            
            if (esi_2[0x52] == result)
                arg2 = *esi_2
                (*__glewDeleteBuffers)(1, &arg2)
                int32_t eax_2 = esi_2[0x36]
                
                if (eax_2 != 0)
                    _aligned_free_base(eax_2)
                    esi_2[0x36] = 0
                
                int32_t ecx_1 = *(arg1 + 0x424c)
                *(arg1 + 0x424c) = zx.d(esi_2[0x52].w)
                esi_2[0x52] = ecx_1
                *(arg1 + 0x4250) -= 1
                return sub_51e000(0)
    
    return result
}
