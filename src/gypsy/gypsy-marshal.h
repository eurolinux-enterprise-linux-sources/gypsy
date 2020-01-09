
#ifndef __gypsy_marshal_MARSHAL_H__
#define __gypsy_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:INT,INT,DOUBLE,DOUBLE,DOUBLE (gypsy-marshal.list:1) */
extern void gypsy_marshal_VOID__INT_INT_DOUBLE_DOUBLE_DOUBLE (GClosure     *closure,
                                                              GValue       *return_value,
                                                              guint         n_param_values,
                                                              const GValue *param_values,
                                                              gpointer      invocation_hint,
                                                              gpointer      marshal_data);

/* VOID:INT,DOUBLE,DOUBLE,DOUBLE (gypsy-marshal.list:2) */
extern void gypsy_marshal_VOID__INT_DOUBLE_DOUBLE_DOUBLE (GClosure     *closure,
                                                          GValue       *return_value,
                                                          guint         n_param_values,
                                                          const GValue *param_values,
                                                          gpointer      invocation_hint,
                                                          gpointer      marshal_data);

G_END_DECLS

#endif /* __gypsy_marshal_MARSHAL_H__ */

