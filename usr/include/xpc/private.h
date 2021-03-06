#include <xpc/xpc.h>

#define XPC_ENV_SANDBOX_CONTAINER_ID "APP_SANDBOX_CONTAINER_ID"

extern xpc_object_t xpc_connection_copy_entitlement_value(xpc_connection_t connection, const char *entitlement);

extern int _xpc_runtime_is_app_sandboxed();

extern void xpc_connection_set_target_uid(xpc_connection_t connection, uid_t uid);

