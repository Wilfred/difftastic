<?php

declare(strict_types=1);

namespace App\Service;

use App\Model\Recipient;
use App\Context\ServiceContext;

interface Handler
{
    /**
     * @param list<int|Recipient> $recipients
     */
    public function handle(
        ServiceContext $context,
        array $recipients,
    ) : void;
}
