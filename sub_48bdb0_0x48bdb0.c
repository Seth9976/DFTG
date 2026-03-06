// 函数名称: sub_48bdb0
// 虚拟地址: 0x48bdb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_48bdb0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* result = data_aca0dc
    void* result = data_aca0dc
    
    if (arg3 != 0)
        uint32_t esi_1 = zx.d(arg3.w)
        
        if (esi_1 u< *(result + 4))
            void* esi_3 = esi_1 * 0x4c + *result
            
            if (*(esi_3 + 0x48) == arg3)
                result = *(esi_3 + 0x10)
                
                if (result != 0xffffffff)
                label_48be04:
                    result = (*(*data_aca1e4 + 0x10))(result, arg2, arg5, arg4)
                    
                    if (result == 0xfffffffe)
                        (*(*data_aca1e4 + 0xc))(*(esi_3 + 0x10))
                        result = (*(*data_aca1e4 + 8))(zx.d(*(esi_3 + 2)), 0)
                        *(esi_3 + 0x10) = result
                else
                    result = (*(*data_aca1e4 + 8))(zx.d(*(esi_3 + 2)), 0)
                    *(esi_3 + 0x10) = result
                    
                    if (result != 0xffffffff)
                        goto label_48be04
    
    return result
}
