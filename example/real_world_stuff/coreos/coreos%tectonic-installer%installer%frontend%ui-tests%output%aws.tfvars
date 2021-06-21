{
  "tectonic_admin_email": "admin@example.com",
  "tectonic_admin_password": "password",
  "tectonic_aws_etcd_ec2_type": "t2.medium",
  "tectonic_aws_etcd_root_volume_size": 30,
  "tectonic_aws_etcd_root_volume_type": "gp2",
  "tectonic_aws_extra_tags": {
    "test_tag": "testing"
  },
  "tectonic_aws_master_custom_subnets": {
    "us-west-1a": "10.0.0.0/19",
    "us-west-1c": "10.0.32.0/19"
  },
  "tectonic_aws_master_ec2_type": "t2.medium",
  "tectonic_aws_master_root_volume_size": 30,
  "tectonic_aws_master_root_volume_type": "gp2",
  "tectonic_aws_private_endpoints": false,
  "tectonic_aws_region": "us-west-1",
  "tectonic_aws_ssh_key": "tectonic-jenkins",
  "tectonic_aws_vpc_cidr_block": "10.0.0.0/16",
  "tectonic_aws_worker_custom_subnets": {
    "us-west-1a": "10.0.64.0/19",
    "us-west-1c": "10.0.96.0/19"
  },
  "tectonic_aws_worker_ec2_type": "t2.medium",
  "tectonic_aws_worker_root_volume_size": 30,
  "tectonic_aws_worker_root_volume_type": "gp2",
  "tectonic_base_domain": "tectonic.dev.coreos.systems",
  "tectonic_cluster_cidr": "10.2.0.0/16",
  "tectonic_cluster_name": "test",
  "tectonic_dns_name": "test",
  "tectonic_etcd_count": 3,
  "tectonic_kube_apiserver_service_ip": "10.3.0.1",
  "tectonic_kube_dns_service_ip": "10.3.0.10",
  "tectonic_kube_etcd_service_ip": "10.3.0.15",
  "tectonic_license_path": "./license.txt",
  "tectonic_master_count": 3,
  "tectonic_pull_secret_path": "./pull_secret.json",
  "tectonic_service_cidr": "10.3.0.0/16",
  "tectonic_worker_count": 3
}
