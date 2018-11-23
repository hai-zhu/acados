/*
 *    This file is part of acados.
 *
 *    acados is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    acados is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with acados; if not, write to the Free Software Foundation,
 *    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef ACADOS_OCP_QP_OCP_QP_OSQP_H_
#define ACADOS_OCP_QP_OCP_QP_OSQP_H_

#ifdef __cplusplus
extern "C" {
#endif

// osqp
#include "osqp/include/types.h"

// acados
#include "acados/ocp_qp/ocp_qp_common.h"
#include "acados/utils/types.h"

typedef struct ocp_qp_osqp_opts_
{
    OSQPSettings *osqp_opts;
} ocp_qp_osqp_opts;


typedef struct ocp_qp_osqp_memory_
{
    OSQPData *osqp_data;
} ocp_qp_osqp_memory;

int ocp_qp_osqp_opts_calculate_size(void *config, void *dims);
//
void *ocp_qp_osqp_opts_assign(void *config, void *dims, void *raw_memory);
//
void ocp_qp_osqp_opts_initialize_default(void *config, void *dims, void *opts_);
//
void ocp_qp_osqp_opts_update(void *config, void *dims, void *opts_);
//
int ocp_qp_osqp_memory_calculate_size(void *config, void *dims, void *opts_);
// //
// void *ocp_qp_osqp_memory_assign(void *config, void *dims, void *opts_, void *raw_memory);
// //
// int ocp_qp_osqp_workspace_calculate_size(void *config, void *dims, void *opts_);
// //
// int ocp_qp_osqp(void *config, void *qp_in, void *qp_out, void *opts_, void *mem_, void *work_);
// //
// void ocp_qp_osqp_config_initialize_default(void *config);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  // ACADOS_OCP_QP_OCP_QP_OSQP_H_
