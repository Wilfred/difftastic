# Cloudwatch resources inspired by https://github.com/azavea/terraform-aws-redis-elasticache
# Stubbing this out, we should have conversation about monitoring before we make this the default behavior
# For this module 
/*

resource "aws_cloudwatch_metric_alarm" "cache_cpu" {
  count = "${var.redis_clusters}"

  alarm_name          = "alarm-${var.name}-${local.vpc_name}-CacheCluster00${count.index + 1}CPUUtilization"
  alarm_description   = "Redis cluster CPU utilization"
  comparison_operator = "GreaterThanThreshold"
  evaluation_periods  = "1"
  metric_name         = "CPUUtilization"
  namespace           = "AWS/ElastiCache"
  period              = "300"
  statistic           = "Average"

  threshold = "${var.alarm_cpu_threshold}"

  dimensions {
    CacheClusterId = "${aws_elasticache_replication_group.redis.id}-00${count.index + 1}"
  }

  alarm_actions = ["${var.alarm_actions}"]
}

resource "aws_cloudwatch_metric_alarm" "cache_memory" {
  count = "${var.redis_clusters}"

  alarm_name          = "alarm-${var.name}-${local.vpc_name}-CacheCluster00${count.index + 1}FreeableMemory"
  alarm_description   = "Redis cluster freeable memory"
  comparison_operator = "LessThanThreshold"
  evaluation_periods  = "1"
  metric_name         = "FreeableMemory"
  namespace           = "AWS/ElastiCache"
  period              = "60"
  statistic           = "Average"

  threshold = "${var.alarm_memory_threshold}"

  dimensions {
    CacheClusterId = "${aws_elasticache_replication_group.redis.id}-00${count.index + 1}"
  }

  alarm_actions = ["${var.alarm_actions}"]
}
*/

